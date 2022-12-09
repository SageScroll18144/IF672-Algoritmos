graph = [[]]
mark = []

def dfs(v):
    mark[v] = True
    for u in graph[v]:
        if not mark[u]:
            dfs(u)