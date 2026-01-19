/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:28:42 by emrullah          #+#    #+#             */
/*   Updated: 2026/01/19 14:29:58 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i,dst_len,src_len;

   

    i=0;
    dst_len =strlen(dst);
    src_len =strlen(src);

    unsigned    char  *d;
    const   unsigned    char *s;
    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    
    
   while(i<src_len &&  dst_len +1 < dstsize)
   {
    d[dst_len] =s[i];
    dst_len++;
    i++;
    d[dst_len] ='\0';
   

   }
   return dst_len + (src_len - i);

}
int main()
{
     char dst[6]="mer";
     char src[]="haba";
    ft_strlcat(dst,src,sizeof);
    printf("%s\n",dst);
    return 0;
}