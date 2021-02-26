BUILD_DIR = build
YAML_FILES = *.yaml

.PHONY: build clean lint requirements

build:
	esphome $(YAML_FILES) compile

clean:
	rm -r $(BUILD_DIR)

lint:
	yamllint .

requirements:
	pip3 install wheel
	pip3 install -r requirements.txt
