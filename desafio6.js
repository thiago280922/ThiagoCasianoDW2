const producto = {
    name: 'Camisa',
    price: 12000,
    stock: 10
}
console.log(producto)

let nombre = producto.name
let nameChange = producto.name = 'Pantalon'

delete producto.stock

producto.categoria = 'Ropa'
console.log(producto)