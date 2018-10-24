    class Calculator {
        constructor (value) {
            this.currentValue = value;
        }
        add(element) {
            this.currentValue += element
        }

        multiply(number) {
            const tmp = this.currentValue;
            for (let i = 1; i < number; i++) {
                this.currentValue += tmp;
            }
        }
    }

    class NumberCalculator extends Calculator{
        constructor (value) {
            super() 
            this.currentValue = value;
        }

        substraction (number) {
            this.currentValue -= number;
        }

        division (number) {
            this.currentValue /= number;
        }
    }
    
    class StringCalculator extends Calculator {
        constructor (value) {
            super() 
            this.currentValue = value
        }

        substraction (string) {
            // const newValue = '';
            // for (let i = 0 ; i < this.currentValue.length; i++) {
                
            // }


            for(let i =0; i<string.length;i++){
                
            }
        }


        division (string) {
            
        }
    }
