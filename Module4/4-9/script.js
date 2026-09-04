(function () {
    const pageLinks = document.querySelectorAll("[data-page-link]");
    const sections = document.querySelectorAll("[data-page]");
    const menuToggle = document.querySelector(".menu-toggle");
    const nav = document.querySelector(".site-nav");
    const form = document.querySelector("#contact-form");

    function showPage(pageName) {
        const page = pageName || "home";
        sections.forEach(function (section) {
            section.hidden = section.dataset.page !== page;
        });
        pageLinks.forEach(function (link) {
            link.classList.toggle("active", link.dataset.pageLink === page);
        });
    }

    function navigate(event) {
        const link = event.currentTarget;
        const target = link.dataset.pageLink;
        if (!target) return;
        event.preventDefault();
        window.history.pushState({}, "", "#" + target);
        showPage(target);
        nav.classList.remove("open");
        menuToggle.setAttribute("aria-expanded", "false");
        window.scrollTo({ top: 0, behavior: "smooth" });
    }

    pageLinks.forEach(function (link) {
        link.addEventListener("click", navigate);
    });
    document.querySelectorAll("a[href^='#']").forEach(function (link) {
        if (!link.dataset.pageLink) {
            link.addEventListener("click", function (event) {
                const target = document.querySelector(link.getAttribute("href"));
                if (!target) return;
                event.preventDefault();
                const pageName = target.dataset.page || "home";
                window.history.pushState({}, "", "#" + pageName);
                showPage(pageName);
                window.scrollTo({ top: 0, behavior: "smooth" });
            });
        }
    });
    window.addEventListener("popstate", function () {
        showPage(window.location.hash.slice(1) || "home");
    });
    menuToggle.addEventListener("click", function () {
        const expanded = menuToggle.getAttribute("aria-expanded") === "true";
        menuToggle.setAttribute("aria-expanded", String(!expanded));
        nav.classList.toggle("open", !expanded);
    });

    form.addEventListener("submit", function (event) {
        event.preventDefault();
        let valid = true;
        const fields = [
            { input: form.elements.name, message: "Please enter your name." },
            { input: form.elements.email, message: "Please enter a valid work email.", validate: function (value) { return /^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(value); } },
            { input: form.elements.message, message: "Please tell us a little about your project." }
        ];
        fields.forEach(function (field) {
            const row = field.input.closest(".field-row");
            const error = row.querySelector(".error-message");
            const isValid = field.input.value.trim() !== "" && (!field.validate || field.validate(field.input.value.trim()));
            row.classList.toggle("invalid", !isValid);
            error.textContent = isValid ? "" : field.message;
            if (!isValid) valid = false;
        });
        const status = form.querySelector(".form-status");
        status.className = "form-status";
        if (valid) {
            status.textContent = "Thanks! Your enquiry is on its way.";
            status.classList.add("success");
            form.reset();
        }
    });

    form.querySelectorAll("input, textarea").forEach(function (field) {
        field.addEventListener("input", function () {
            field.closest(".field-row").classList.remove("invalid");
            field.closest(".field-row").querySelector(".error-message").textContent = "";
        });
    });

    const requestedPage = window.location.hash.slice(1);
    showPage(["home", "services", "about", "contact"].includes(requestedPage) ? requestedPage : "home");
})();
