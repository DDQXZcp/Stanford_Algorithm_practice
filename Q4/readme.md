DFS wikipedia: https://zh.wikipedia.org/wiki/%E6%B7%B1%E5%BA%A6%E4%BC%98%E5%85%88%E6%90%9C%E7%B4%A2

Topological sort: https://www.runoob.com/python3/python-topological-sorting.html

DFS implementation: https://brilliant.org/wiki/depth-first-search-dfs/

Poblem Set 4, Q2:

~~~
Function answer(from, to)
{
  if (from == to)
    return 1
  if (from > to)
    return answer(to, from)
  if from == s or from == t
    if there exist more than one entry not read yet with the same from
      return 0
    else
      return 1
  else if to == s or to == t
    if there exist more than one entry not read yet with the same to
      return 0
    else
      return 1  
  else if to == s or to == t
    if there exist more than two entries not read yet with the same from
      return 0
    else
      return 1    
}

~~~
