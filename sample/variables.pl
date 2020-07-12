#!/usr/bin/perl  
# use Data::Dumper; -> Doesn't recognize :: , might add later 

=Correct way to declare varialbes in perl
$my-name = "John"; # Invalid 
$my name = "John"; # Invalid
$my_name = "John"; # Valid
=cut

# Scalar Variable 
$name = "GeeksForGeeks"; 
# Interpolation of a Variable 
  
# Using Single Quote 
print('Name is $name\n'); 
  
# Using Double Quotes 
print("\nName is $name"); 
  
# Printing hash contents 
# print Dumper(\%Hash); -> Doesn't recognize '\' , might add later
