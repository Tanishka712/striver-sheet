bool ispalin(char s)
{
  int i,j=0;
  char nor[s.len+1];
  for(i=0;s[i]!='/0';i++)
{
  if (isalnum(s[i]))
    nor[j++]=s[i].tolower;
}
normalized[j]='\0';

    int left=0, right=j-1;
    while(left<right)
    {
        if(nor[left]!=nor[right])
        return false;
        left++;
        right--;
    }
    return true;
}
