import functools

def log():
	def decorator(func):
		@functools.wraps(func)
		def wrapper(*args, **kw):
			print '%s %s()' % ('begin call', func.__name__)
			result = func(*args, **kw)
			print '%s %s()' % ('end call', func.__name__)
			return result
		return wrapper
	return decorator

@log()
def now():
	print '2015-04-14'

now()