#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INeedQuestsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INeedQuestsEntity"));
	}


	template <typename T = NeedQuestsComponent*> T get_needQuests() {
		return ((T (*)(INeedQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasNeedQuests() {
		return ((T (*)(INeedQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddNeedQuests(Il2CppArray<uintptr_t>* newValues, Il2CppString* newFailMsg) {
		return ((T (*)(INeedQuestsEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValues, newFailMsg);
	}
	template <typename T = void> T ReplaceNeedQuests(Il2CppArray<uintptr_t>* newValues, Il2CppString* newFailMsg) {
		return ((T (*)(INeedQuestsEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValues, newFailMsg);
	}
	template <typename T = void> T RemoveNeedQuests() {
		return ((T (*)(INeedQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

