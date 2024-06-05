let productos = [
    { name: "pantalón", precio: 20000, stock: 12 }, 
    { name: "buzo", precio: 30000, stock: 9 }, 
    { name: "campera", precio: 40000, stock: 30 }, 
    { name: "remera", precio: 10000, stock: 18 }, 
    { name: "chaleco", precio: 15000, stock: 12 }, 
    { name: "short", precio: 8000, stock: 9 }
];

for (let index = 0; index < productos.length; index++) {
    console.log(`${productos[index].name} - precio : ${productos[index].precio}
    - stock : ${productos[index].stock} `);
}

console.log("-----------------------------------------------------------------");
productos.pop();
console.log(productos);
console.log("-----------------------------------------------------------------");

for (let index = 0; index < productos.length; index ++) {
    console.log(`${productos[index].name} - precio : ${productos[index].precio}
    - stock : ${productos[index].stock}`);
}