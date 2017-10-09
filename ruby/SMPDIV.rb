t = gets.chomp.to_i
t.times do
  n, x, y = gets.chomp.split.map(&:to_i)
  (1..n).each do |i|
    if i % x == 0 && i % y != 0
      print i, " "
    end
  end
end
