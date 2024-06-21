document.addEventListener('DOMContentLoaded', function () {
    const container = document.getElementById('container_menuItems');
    const counterCart = document.getElementById('counter_cart');
    const cartItemsContainer = document.getElementById('cartItemsContainer');
    const cartIcon = document.getElementById('cart-icon');
    let cart = [];

    cartIcon.addEventListener('click', cartClear);

    function cartClear() {
        cart = [];
        updateCartCounter();
        console.log('Carrito vaciado');
        cartDisplay();
    }

    function updateCartCounter() {
        counterCart.textContent = cart.length;
    }

    function addToCart(itemId) {
        cart.push(itemId);
        updateCartCounter();
        console.log('Producto añadido al carrito:', itemId);
        console.log('Carrito:', cart);
    }

    function cartDisplay() {
        cartItemsContainer.innerHTML = '';
        cart.forEach((itemId, index) => {
            const item = menuItems.find(item => item.id === itemId);
            if (item) {
                const cartItemElement = document.createElement('div');
                cartItemElement.className = 'cart-item';
                cartItemElement.innerHTML = `
                    <span>${item.name} - $${item.price.toFixed(2)}</span>
                    <button class="button remove-btn" data-index="${index}">
                        <span class="button__text">Eliminar</span>
                    </button>
                `;
                cartItemsContainer.appendChild(cartItemElement);

                const removeButton = cartItemElement.querySelector('.remove-btn');
                if (removeButton) {
                    removeButton.addEventListener('click', () => {
                        removeItemCart(index);
                    });
                }
            } else {
                console.error('No se encontró el artículo correspondiente al ID:', itemId);
            }
        });
        cartItemsContainer.classList.add('visible');
    }

    function removeItemCart(index) {
        cart.splice(index, 1);
        updateCartCounter();
        console.log('Producto eliminado del carrito:', index);
        cartDisplay();
    }

    cartIcon.addEventListener('mouseover', () => {
        cartDisplay();
    });

    cartItemsContainer.addEventListener('mouseleave', () => {
        cartItemsContainer.classList.remove('visible');
    });

    function GetMenuItems() {
        container.innerHTML = '';
        menuItems.forEach(item => {
            const itemElement = document.createElement('div');
            itemElement.innerHTML = `
                <h2>${item.name}</h2>
                <img src="${item.image_url}" alt="${item.name}" width="200" height="200">
                <p>${item.description}</p>
                <p>Precio: $${item.price.toFixed(2)}</p>
                <button class="addToCartBtn" data-item-id="${item.id}">Comprar</button>
            `;
            container.appendChild(itemElement);

            const addToCartButton = itemElement.querySelector('.addToCartBtn');
            addToCartButton.addEventListener('click', () => {
                addToCart(item.id);
            });
        });
    }

    GetMenuItems();
});
