class Arena:
    def present_circus(self, circus_name: str):
        return f"This is the {circus_name}\n{'=' * 79}"
    def announce_animal(self, name: str, species: str):
        return f"Next will perform. It is a: {name} - {species}"
    def display_performance(self, performance: str):
        return f"-> {performance}"
