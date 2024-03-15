#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass610
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass61_0"));
	}

	template <typename R = QuestDataEntity*> R& questData() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Initb__0() {
		return ((R (*)(cDisplayClass610*))(Il2CppBase() + 0x1135C58))(this);
	}

};

