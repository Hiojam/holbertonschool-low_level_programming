echo "Insert commit msg"
read msg

git add .
git commit -m "$msg"
git push
