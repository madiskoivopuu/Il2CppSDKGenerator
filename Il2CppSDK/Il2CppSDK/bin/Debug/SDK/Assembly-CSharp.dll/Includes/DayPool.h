#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DayPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DayPool"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& EasyQuests() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MediumQuests() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HardQuests() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = HashSet1Il2CppString*>*> T& Set() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Item(GuildQuestDifficulty* difficulty) {
		return ((T (*)(DayPool*, GuildQuestDifficulty*))(Il2CppBase() + 0xEA5A1C))(this, difficulty);
	}
	template <typename T = void> T set_Item(GuildQuestDifficulty* difficulty, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DayPool*, GuildQuestDifficulty*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xEA5AC0))(this, difficulty, value);
	}

};

