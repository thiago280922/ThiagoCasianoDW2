const encabezado1 = document.getElementById('nombreProducto')
console.log(encabezado1)

const encabezado2 = document.getElementById('precioProducto')
encabezado2.innerHTML = 'Precio: $750.00';
console.log(encabezado2)

console.log(encabezado2.innerText)

const texto = document.querySelector('#nombreProducto')
const precio = document.querySelector('#precioProducto')

//Titulo
texto.style.fontSize = '80px'
texto.style.color = 'red'
//Subtitulo
precio.style.fontSize = '40px'
precio.style.color = 'grey'

