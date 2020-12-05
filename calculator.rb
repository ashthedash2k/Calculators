class Calculator

  def initialize(num1, num2)
    @num1, @num2 = num1, num2
  end

  def add
    return @num1 + @num2
  end

  def subtract
    return @num1 - @num2
  end

  def divide
    return @num1/@num2
  end

  def multiply
    return @num1 * @num2
  end
end

value = Calculator.new(4, 3)

adding_value = value.add()

puts "your product is: #{adding_value}"
