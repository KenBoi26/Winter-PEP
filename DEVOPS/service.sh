#!/bin/bash

App_name="MyFirstApp"
ping=10

Service=("cloud" "devops" "nodejs")

echo "My app name is : $App_name"
echo "Ping is : $ping"

echo ${Service[0]}
echo ${Service[@]}
