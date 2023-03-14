|up R =>direction right, R |direction down R |direction left R <= direction up
|up L => direction left, L direction down L |direction right L <= direction up
.........................L direction up, 


function my_spaceship(array){
    let arr = array.split("")
    const obj = { x: 0, y: 0, direction: "up" },   n = arr.length;

    for(let i = 0; i < n; i++){
        if(obj.direction === "up" && arr[i] === "R"){
            obj.direction = "right"
        }else if(obj.direction === "up" && arr[i] === "A"){
            obj.y--;
        }else if(obj.direction === "up" && arr[i] === "L"){
            obj.direction = "left"
        }      
        else if(obj.direction === "right" && arr[i] === "R"){
            obj.direction = "down"
        }else if(obj.direction === "right" && arr[i] === "A"){
            obj.x++
        }else if(obj.direction === "right" && arr[i] === "L"){
            obj.direction = "up"
        }
        else if(obj.direction === "left" && arr[i] === "R"){
            obj.direction = "up"
        }else if(obj.direction === "left" && arr[i] === "A"){
            obj.x--;
        }else if(obj.direction === "left" && arr[i] === "L"){
            obj.direction = "down"
        }
        else if(obj.direction === "down" && arr[i] === "R"){
            obj.direction = "left"
        }else if(obj.direction === "down" && arr[i] === "A"){
            obj.y++;
        }else if(obj.direction === "down" && arr[i] === "L"){
            obj.direction = "right"
        } 
    }
        return `"{x: ${obj.x}, y: ${obj.y}, direction: '${obj.direction}'}"`;
}
console.log(my_spaceship("RAALALL"))
console.log(my_spaceship("AAAA"))
console.log(my_spaceship(""))
console.log(my_spaceship("RAARA"))
