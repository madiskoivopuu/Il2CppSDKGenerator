#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NeedQuestsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NeedQuestsComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& FailMsg() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(NeedQuestsComponent*, Il2CppObject*))(Il2CppBase() + 0x13A9490))(this, target);
	}

};

