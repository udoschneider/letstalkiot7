build:
	docker build -t sample_app .

run:
	docker run -dp 3000:3000 sample_app

inspect:
	docker image inspect sample_app | less

generate_lock:
	docker lock generate

verify_lock:
	docker lock verify

rewrite_lock:
	docker lock rewrite

clean:
	rm docker-lock.json