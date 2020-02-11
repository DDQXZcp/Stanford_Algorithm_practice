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
    return answer(to, from)  # This statement is very concise, automatically change the input
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

Dijkstra算法: https://baike.baidu.com/item/%E8%BF%AA%E5%85%8B%E6%96%AF%E7%89%B9%E6%8B%89%E7%AE%97%E6%B3%95/23665989?fromtitle=Dijkstra%E7%AE%97%E6%B3%95&fromid=215612
