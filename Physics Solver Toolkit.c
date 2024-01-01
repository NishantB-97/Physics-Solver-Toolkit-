#include <stdio.h>
#include <math.h>

const double g = 9.81;           // Acceleration due to gravity
const double c = 299792458;      // Speed of light in vacuum
const double M_Pi = 3.14159265358979323846;      // Pi

void physicsMenu();
void mathMenu();
void chemistryMenu();
void algebraMenu();
void geometryMenu();
void mechanicsMenu();

void performPhysicsCalculation(int choice);
void performMathCalculation(int choice);
void performChemistryCalculation(int choice);
void performAlgebraCalculation(int choice);
void performGeometryCalculation(int choice);
void performMechanicsCalculation(int choice);


int main() {
    int categoryChoice;

    printf("Welcome to the Science Calculator!\n");

    while (1) {
        printf("\nSelect a category:\n");
        printf("1. Physics\n2. Math\n3. Chemistry\n4. Algebra\n5. Geometry\n6. Mechanics\n7. Exit\n");

        if (scanf("%d", &categoryChoice) != 1) {
            printf("Invalid input. Exiting...\n");
            break;
        }

        switch (categoryChoice) {
            case 1:
                physicsMenu();
                break;

            case 2:
                mathMenu();
                break;

            case 3:
                chemistryMenu();
                break;

            case 4:
                algebraMenu();
                break;

            case 5:
                geometryMenu();
                break;

            case 6:
                mechanicsMenu();
                break;

            case 7:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please select again.\n");
        }
    }

    return 0;
}

void physicsMenu() {
    int physicsChoice;

    while (1) {
        printf("\nPhysics Calculations:\n");
        printf("1. Velocity\n2. Acceleration\n3. Mass-Energy Equivalence\n4. Projectile Motion\n5. Newton's Law of Gravitation\n6. Work and Energy\n7. Kinetic Energy\n8. Potential Energy\n9. Power\n10. Coulomb's Law\n11. Ohm's Law\n12. Wave Speed\n13. Doppler Effect\n14. Back to Main Menu\n");

        if (scanf("%d", &physicsChoice) != 1) {
            printf("Invalid input. Returning to Main Menu...\n");
            break;
        }

        if (physicsChoice == 14) {
            printf("Returning to Main Menu...\n");
            break;
        }

        performPhysicsCalculation(physicsChoice);
    }
}

void mathMenu() {
    int mathChoice;

    while (1) {
        printf("\nMath Calculations:\n");
        printf("1. Square Root\n2. Power\n3. Logarithm\n4. Trigonometry\n5. Factorial\n6. Permutation\n7. Combination\n8. Quadratic Equation\n9. Binomial Theorem\n10. Limits\n11. Derivatives\n12. Integrals\n13. Vectors\n14. Back to Main Menu\n");

        if (scanf("%d", &mathChoice) != 1) {
            printf("Invalid input. Returning to Main Menu...\n");
            break;
        }

        if (mathChoice == 14) {
            printf("Returning to Main Menu...\n");
            break;
        }

        performMathCalculation(mathChoice);
    }
}

void chemistryMenu() {
    int chemistryChoice;

    while (1) {
        printf("\nChemistry Calculations:\n");
        printf("1. Molarity\n2. Stoichiometry\n3. Gas Laws\n4. Thermochemistry\n5. Electrochemistry\n6. Back to Main Menu\n");

        if (scanf("%d", &chemistryChoice) != 1) {
            printf("Invalid input. Returning to Main Menu...\n");
            break;
        }

        if (chemistryChoice == 6) {
            printf("Returning to Main Menu...\n");
            break;
        }

        performChemistryCalculation(chemistryChoice);
    }
}


void algebraMenu() {
    int algebraChoice;

    while (1) {
        printf("\nAlgebra Calculations:\n");
        printf("1. Linear Equations\n2. Quadratic Equations\n3. Systems of Equations\n4. Polynomials\n5. Logarithmic Equations\n6. Back to Main Menu\n");

        if (scanf("%d", &algebraChoice) != 1) {
            printf("Invalid input. Returning to Main Menu...\n");
            break;
        }

        if (algebraChoice == 6) {
            printf("Returning to Main Menu...\n");
            break;
        }

        performAlgebraCalculation(algebraChoice);
    }
}


void geometryMenu() {
    int geometryChoice;

    while (1) {
        printf("\nGeometry Calculations:\n");
        printf("1. Area of Shapes\n2. Volume of Shapes\n3. Pythagorean Theorem\n4. Trigonometry\n5. Back to Main Menu\n");

        if (scanf("%d", &geometryChoice) != 1) {
            printf("Invalid input. Returning to Main Menu...\n");
            break;
        }

        if (geometryChoice == 5) {
            printf("Returning to Main Menu...\n");
            break;
        }

        performGeometryCalculation(geometryChoice);
    }
}


void mechanicsMenu() {
    int mechanicsChoice;

    while (1) {
        printf("\nMechanics Calculations:\n");
        printf("1. Newton's Second Law\n2. Work-Energy Theorem\n3. Circular Motion\n4. Torque\n5. Momentum\n6. Impulse\n7. Back to Main Menu\n");

        if (scanf("%d", &mechanicsChoice) != 1) {
            printf("Invalid input. Returning to Main Menu...\n");
            break;
        }

        if (mechanicsChoice == 7) {
            printf("Returning to Main Menu...\n");
            break;
        }

        performMechanicsCalculation(mechanicsChoice);
    }
}



void performPhysicsCalculation(int choice) {
    double result, value1, value2, value3;

    switch (choice) {
        case 1:
            // Velocity Calculation
            printf("Enter Displacement (m): ");
            scanf("%lf", &value1);
            printf("Enter Time (s): ");
            scanf("%lf", &value2);
            result = value1 / value2;
            printf("Velocity (m/s): %.2f\n", result);
            break;

        case 2:
            // Acceleration Calculation
            printf("Enter Velocity (m/s): ");
            scanf("%lf", &value1);
            printf("Enter Time (s): ");
            scanf("%lf", &value2);
            result = value1 / value2;
            printf("Acceleration (m/s^2): %.2f\n", result);
            break;

        case 3:
            // Mass-Energy Equivalence
            printf("Enter Mass (kg): ");
            scanf("%lf", &value1);
            result = value1 * c * c;
            printf("Energy (Joules): %.2f\n", result);
            break;

        case 4:
            // Projectile Motion
            printf("Enter Initial Velocity (m/s): ");
            scanf("%lf", &value1);
            printf("Enter Launch Angle (degrees): ");
            scanf("%lf", &value2);
            // Assuming no air resistance
            result = (value1 * value1 * sin(2 * value2 * M_Pi / 180)) / g;
            printf("Projectile Range: %.2f meters\n", result);
            break;

        case 5:
            // Newton's Law of Gravitation
            printf("Enter Mass 1 (kg): ");
            scanf("%lf", &value1);
            printf("Enter Mass 2 (kg): ");
            scanf("%lf", &value2);
            printf("Enter Distance (m): ");
            scanf("%lf", &value3);
            result = (g * value1 * value2) / (value3 * value3);
            printf("Gravitational Force: %.2f N\n", result);
            break;

        case 6:
            // Work and Energy
            printf("Enter Force (N): ");
            scanf("%lf", &value1);
            printf("Enter Displacement (m): ");
            scanf("%lf", &value2);
            result = value1 * value2;
            printf("Work Done: %.2f J\n", result);
            break;

        case 7:
            // Kinetic Energy
            printf("Enter Mass (kg): ");
            scanf("%lf", &value1);
            printf("Enter Velocity (m/s): ");
            scanf("%lf", &value2);
            result = 0.5 * value1 * value2 * value2;
            printf("Kinetic Energy: %.2f J\n", result);
            break;

        case 8:
            // Potential Energy
            printf("Enter Mass (kg): ");
            scanf("%lf", &value1);
            printf("Enter Height (m): ");
            scanf("%lf", &value2);
            result = g * value1 * value2;
            printf("Potential Energy: %.2f J\n", result);
            break;

        case 9:
            // Power
            printf("Enter Work Done (J): ");
            scanf("%lf", &value1);
            printf("Enter Time (s): ");
            scanf("%lf", &value2);
            result = value1 / value2;
            printf("Power: %.2f W\n", result);
            break;

        case 10:
            // Coulomb's Law
            printf("Enter Charge 1 (C): ");
            scanf("%lf", &value1);
            printf("Enter Charge 2 (C): ");
            scanf("%lf", &value2);
            printf("Enter Distance (m): ");
            scanf("%lf", &value3);
            result = (9 * pow(10, 9) * value1 * value2) / (value3 * value3);
            printf("Electric Force: %.2f N\n", result);
            break;

        case 11:
            // Ohm's Law
            printf("Enter Voltage (V): ");
            scanf("%lf", &value1);
            printf("Enter Resistance (ohms): ");
            scanf("%lf", &value2);
            result = value1 / value2;
            printf("Current (A): %.2f\n", result);
            break;

        case 12:
            // Wave Speed
            printf("Enter Frequency (Hz): ");
            scanf("%lf", &value1);
            printf("Enter Wavelength (m): ");
            scanf("%lf", &value2);
            result = value1 * value2;
            printf("Wave Speed (m/s): %.2f\n", result);
            break;

        case 13:
            // Doppler Effect
            printf("Enter Initial Frequency (Hz): ");
            scanf("%lf", &value1);
            printf("Enter Speed of Source (m/s): ");
            scanf("%lf", &value2);
            printf("Enter Speed of Observer (m/s): ");
            scanf("%lf", &value3);
            result = value1 * ((c + value3) / (c + value2));
            printf("Observed Frequency (Hz): %.2f\n", result);
            break;

        default:
            printf("Invalid Input\n");
    }
}

void performMathCalculation(int choice) {
    double result, value1, value2;

    switch (choice) {
        case 1:
            // Square Root
            printf("Enter a number: ");
            scanf("%lf", &value1);
            result = sqrt(value1);
            printf("Square Root: %.2f\n", result);
            break;

        case 2:
            // Power
            printf("Enter base: ");
            scanf("%lf", &value1);
            printf("Enter exponent: ");
            scanf("%lf", &value2);
            result = pow(value1, value2);
            printf("Result: %.2f\n", result);
            break;

        case 3:
            // Logarithm
            printf("Enter a number: ");
            scanf("%lf", &value1);
            result = log10(value1);
            printf("Logarithm (base 10): %.2f\n", result);
            break;

        case 4:
            // Trigonometry (Sine)
            printf("Enter an angle in degrees: ");
            scanf("%lf", &value1);
            result = sin(value1 * M_Pi / 180);
            printf("Sine: %.2f\n", result);
            break;

        case 5:
            // Factorial
            printf("Enter a positive integer: ");
            scanf("%lf", &value1);
            result = 1;
            for (int i = 1; i <= value1; ++i) {
                result *= i;
            }
            printf("Factorial: %.2f\n", result);
            break;

        case 6:
            // Permutation
            printf("Enter total items (n): ");
            scanf("%lf", &value1);
            printf("Enter selected items (r): ");
            scanf("%lf", &value2);
            result = tgamma(value1 + 1) / tgamma(value1 - value2 + 1);
            printf("Permutation: %.2f\n", result);
            break;

        case 7:
            // Combination
            printf("Enter total items (n): ");
            scanf("%lf", &value1);
            printf("Enter selected items (r): ");
            scanf("%lf", &value2);
            result = tgamma(value1 + 1) / (tgamma(value2 + 1) * tgamma(value1 - value2 + 1));
            printf("Combination: %.2f\n", result);
            break;

        case 8:
            // Quadratic Equation
            printf("Enter coefficient a: ");
            scanf("%lf", &value1);
            printf("Enter coefficient b: ");
            scanf("%lf", &value2);
            double c;
            printf("Enter coefficient c: ");
            scanf("%lf", &c);
            double discriminant = value2 * value2 - 4 * value1 * c;
            if (discriminant > 0) {
                double root1 = (-value2 + sqrt(discriminant)) / (2 * value1);
                double root2 = (-value2 - sqrt(discriminant)) / (2 * value1);
                printf("Roots: %.2f, %.2f\n", root1, root2);
            } else if (discriminant == 0) {
                double root = -value2 / (2 * value1);
                printf("Root: %.2f\n", root);
            } else {
                printf("No real roots\n");
            }
            break;

        // Add more cases for additional math calculations as needed

        default:
            printf("Invalid Input\n");
    }
}

void performChemistryCalculation(int choice) {
    double result, value1, value2, value3;

    switch (choice) {
        case 1:
            // Molarity Calculation
            printf("Enter Moles of Solute: ");
            scanf("%lf", &value1);
            printf("Enter Liters of Solution: ");
            scanf("%lf", &value2);
            result = value1 / value2;
            printf("Molarity: %.2f moles/L\n", result);
            break;

        case 2:
            // Stoichiometry Calculation
            printf("Enter Moles of Reactant: ");
            scanf("%lf", &value1);
            printf("Enter Stoichiometric Coefficient: ");
            scanf("%lf", &value2);
            result = value1 * value2;
            printf("Moles of Product: %.2f moles\n", result);
            break;

        case 3:
            // Ideal Gas Law
            printf("Enter Pressure (atm): ");
            scanf("%lf", &value1);
            printf("Enter Volume (L): ");
            scanf("%lf", &value2);
            printf("Enter Moles of Gas: ");
            scanf("%lf", &value3);
            result = (value1 * value2) / (0.0821 * (273.15 + 25) * value3);
            printf("Number of moles of gas: %.2f moles\n", result);
            break;

        case 4:
            // Thermochemistry
            printf("Enter Heat Change (J): ");
            scanf("%lf", &value1);
            printf("Enter Temperature Change (K): ");
            scanf("%lf", &value2);
            result = value1 / value2;
            printf("Heat Capacity: %.2f J/K\n", result);
            break;

        case 5:
            // Electrochemistry
            printf("Enter Faraday's Constant (C/mol): ");
            scanf("%lf", &value1);
            printf("Enter Charge (C): ");
            scanf("%lf", &value2);
            result = value2 / value1;
            printf("Moles of Substance: %.2f moles\n", result);
            break;

        default:
            printf("Invalid Input\n");
    }
}
 


 void performAlgebraCalculation(int choice) {
    double result, value1, value2, value3;

    switch (choice) {
        case 1:
            // Linear Equations
            printf("Enter coefficient of x: ");
            scanf("%lf", &value1);
            printf("Enter constant term: ");
            scanf("%lf", &value2);
            result = -value2 / value1;
            printf("Solution: x = %.2f\n", result);
            break;

        case 2:
            // Quadratic Equations
            printf("Enter coefficient of x^2: ");
            scanf("%lf", &value1);
            printf("Enter coefficient of x: ");
            scanf("%lf", &value2);
            printf("Enter constant term: ");
            scanf("%lf", &value3);
            double discriminant = value2 * value2 - 4 * value1 * value3;
            if (discriminant > 0) {
                double root1 = (-value2 + sqrt(discriminant)) / (2 * value1);
                double root2 = (-value2 - sqrt(discriminant)) / (2 * value1);
                printf("Solutions: x1 = %.2f, x2 = %.2f\n", root1, root2);
            } else if (discriminant == 0) {
                double root = -value2 / (2 * value1);
                printf("Solution: x = %.2f\n", root);
            } else {
                printf("No real solutions\n");
            }
            break;

        case 3:
            // Systems of Equations
            printf("Enter coefficients for equations ax + by = c and dx + ey = f:\n");
            printf("Enter a: ");
            scanf("%lf", &value1);
            printf("Enter b: ");
            scanf("%lf", &value2);
            printf("Enter c: ");
            scanf("%lf", &value3);
            double a, b, c, d, e, f;
            a = value1;
            b = value2;
            c = value3;
            printf("Enter d: ");
            scanf("%lf", &value1);
            printf("Enter e: ");
            scanf("%lf", &value2);
            printf("Enter f: ");
            scanf("%lf", &value3);
            d = value1;
            e = value2;
            f = value3;

            double determinant = a * e - b * d;
            if (determinant != 0) {
                double x = (c * e - b * f) / determinant;
                double y = (a * f - c * d) / determinant;
                printf("Solution: x = %.2f, y = %.2f\n", x, y);
            } else {
                printf("No unique solution (infinite solutions or no solutions)\n");
            }
            break;

        case 4:
            // Polynomials
            printf("Enter coefficients of the polynomial separated by spaces (highest degree first):\n");
            printf("Example for x^2 + 2x + 1: 1 2 1\n");
            scanf("%lf %lf %lf", &value1, &value2, &value3);
            // You can perform polynomial operations here
            printf("Polynomial calculation not implemented yet.\n");
            break;

        case 5:
            // Logarithmic Equations
            printf("Enter base of the logarithm: ");
            scanf("%lf", &value1);
            printf("Enter argument of the logarithm: ");
            scanf("%lf", &value2);
            result = log(value2) / log(value1);
            printf("Solution: %.2f\n", result);
            break;

        default:
            printf("Invalid Input\n");
    }
}


void performGeometryCalculation(int choice) {
    double result, value1, value2, value3;

    switch (choice) {
        case 1:
            // Area of Shapes
            printf("Select a shape for area calculation:\n");
            printf("1. Rectangle\n2. Triangle\n3. Circle\n");
            int shapeChoice;
            scanf("%d", &shapeChoice);

            switch (shapeChoice) {
                case 1:
                    // Rectangle
                    printf("Enter length: ");
                    scanf("%lf", &value1);
                    printf("Enter width: ");
                    scanf("%lf", &value2);
                    result = value1 * value2;
                    printf("Area of Rectangle: %.2f square units\n", result);
                    break;

                case 2:
                    // Triangle
                    printf("Enter base: ");
                    scanf("%lf", &value1);
                    printf("Enter height: ");
                    scanf("%lf", &value2);
                    result = 0.5 * value1 * value2;
                    printf("Area of Triangle: %.2f square units\n", result);
                    break;

                case 3:
                    // Circle
                    printf("Enter radius: ");
                    scanf("%lf", &value1);
                    result = M_Pi * value1 * value1;
                    printf("Area of Circle: %.2f square units\n", result);
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 2:
            // Volume of Shapes
            printf("Select a shape for volume calculation:\n");
            printf("1. Cube\n2. Sphere\n3. Cylinder\n");
            int volumeShapeChoice;
            scanf("%d", &volumeShapeChoice);

            switch (volumeShapeChoice) {
                case 1:
                    // Cube
                    printf("Enter side length: ");
                    scanf("%lf", &value1);
                    result = value1 * value1 * value1;
                    printf("Volume of Cube: %.2f cubic units\n", result);
                    break;

                case 2:
                    // Sphere
                    printf("Enter radius: ");
                    scanf("%lf", &value1);
                    result = (4.0 / 3.0) * M_Pi * value1 * value1 * value1;
                    printf("Volume of Sphere: %.2f cubic units\n", result);
                    break;

                case 3:
                    // Cylinder
                    printf("Enter radius: ");
                    scanf("%lf", &value1);
                    printf("Enter height: ");
                    scanf("%lf", &value2);
                    result = M_Pi * value1 * value1 * value2;
                    printf("Volume of Cylinder: %.2f cubic units\n", result);
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        case 3:
            // Pythagorean Theorem
            printf("Enter length of side A: ");
            scanf("%lf", &value1);
            printf("Enter length of side B: ");
            scanf("%lf", &value2);
            result = sqrt(value1 * value1 + value2 * value2);
            printf("Length of hypotenuse (C): %.2f units\n", result);
            break;

        case 4:
            // Trigonometry
            printf("Select a trigonometric calculation:\n");
            printf("1. Sine\n2. Cosine\n3. Tangent\n");
            int trigChoice;
            scanf("%d", &trigChoice);

            switch (trigChoice) {
                case 1:
                    // Sine
                    printf("Enter angle in degrees: ");
                    scanf("%lf", &value1);
                    result = sin(value1 * M_Pi / 180.0);
                    printf("Sine of %.2f degrees: %.2f\n", value1, result);
                    break;

                case 2:
                    // Cosine
                    printf("Enter angle in degrees: ");
                    scanf("%lf", &value1);
                    result = cos(value1 * M_Pi / 180.0);
                    printf("Cosine of %.2f degrees: %.2f\n", value1, result);
                    break;

                case 3:
                    // Tangent
                    printf("Enter angle in degrees: ");
                    scanf("%lf", &value1);
                    result = tan(value1 * M_Pi / 180.0);
                    printf("Tangent of %.2f degrees: %.2f\n", value1, result);
                    break;

                default:
                    printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid Input\n");
    }
}


void performMechanicsCalculation(int choice) {
    double result, value1, value2, value3;

    switch (choice) {
        case 1:
            // Newton's Second Law
            printf("Enter mass (kg): ");
            scanf("%lf", &value1);
            printf("Enter acceleration (m/s^2): ");
            scanf("%lf", &value2);
            result = value1 * value2;
            printf("Force (N): %.2f\n", result);
            break;

        case 2:
            // Work-Energy Theorem
            printf("Enter force (N): ");
            scanf("%lf", &value1);
            printf("Enter displacement (m): ");
            scanf("%lf", &value2);
            result = value1 * value2;
            printf("Work (J): %.2f\n", result);
            break;

        case 3:
            // Circular Motion
            printf("Enter radius of the circular path (m): ");
            scanf("%lf", &value1);
            printf("Enter velocity (m/s): ");
            scanf("%lf", &value2);
            result = value2 * value2 / value1;
            printf("Centripetal Acceleration (m/s^2): %.2f\n", result);
            break;

        case 4:
            // Torque
            printf("Enter force applied (N): ");
            scanf("%lf", &value1);
            printf("Enter lever arm length (m): ");
            scanf("%lf", &value2);
            result = value1 * value2;
            printf("Torque (N*m): %.2f\n", result);
            break;

        case 5:
            // Momentum
            printf("Enter mass (kg): ");
            scanf("%lf", &value1);
            printf("Enter velocity (m/s): ");
            scanf("%lf", &value2);
            result = value1 * value2;
            printf("Momentum (kg*m/s): %.2f\n", result);
            break;

        case 6:
            // Impulse
            printf("Enter force applied (N): ");
            scanf("%lf", &value1);
            printf("Enter time of application (s): ");
            scanf("%lf", &value2);
            result = value1 * value2;
            printf("Impulse (N*s): %.2f\n", result);
            break;

        default:
            printf("Invalid Input\n");
    }
}