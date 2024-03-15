#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DayPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DayPool"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& EasyQuests() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& MediumQuests() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& HardQuests() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 HashSet1Il2CppString*>*& Set() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R get_Item(GuildQuestDifficulty* difficulty) {
		return ((R (*)(DayPool*, GuildQuestDifficulty*))(Il2CppBase() + 0xEA5A1C))(this, difficulty);
	}
	template <typename R = void> R set_Item(GuildQuestDifficulty* difficulty, Il2CppArray<Il2CppString*>* value) {
		return ((R (*)(DayPool*, GuildQuestDifficulty*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xEA5AC0))(this, difficulty, value);
	}

};

