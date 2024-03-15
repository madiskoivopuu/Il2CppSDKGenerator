#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INeedQuestsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INeedQuestsEntity"));
	}


	template <typename R = NeedQuestsComponent*> R get_needQuests() {
		return ((R (*)(INeedQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasNeedQuests() {
		return ((R (*)(INeedQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddNeedQuests(Il2CppArray<Il2CppString*>* newValues, Il2CppString* newFailMsg) {
		return ((R (*)(INeedQuestsEntity*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValues, newFailMsg);
	}
	template <typename R = void> R ReplaceNeedQuests(Il2CppArray<Il2CppString*>* newValues, Il2CppString* newFailMsg) {
		return ((R (*)(INeedQuestsEntity*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValues, newFailMsg);
	}
	template <typename R = void> R RemoveNeedQuests() {
		return ((R (*)(INeedQuestsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

