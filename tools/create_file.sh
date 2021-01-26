file_dir=$0
file_name=$1
template_file=`ls $(dirname $file_dir)/templates/template.cpp`
cp $template_file ./$file_name
