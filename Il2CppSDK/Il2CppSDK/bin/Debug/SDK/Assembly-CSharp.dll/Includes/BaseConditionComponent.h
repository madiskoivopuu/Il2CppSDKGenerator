#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseConditionComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& HasHealthCondition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& FailMsg() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BaseConditionComponent*, uintptr_t))(Il2CppBase() + 0x166CBA0))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseConditionComponent*, uintptr_t))(Il2CppBase() + 0x166CC60))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseConditionComponent*, uintptr_t))(Il2CppBase() + 0x166CCC8))(this, reader);
	}

};

}
