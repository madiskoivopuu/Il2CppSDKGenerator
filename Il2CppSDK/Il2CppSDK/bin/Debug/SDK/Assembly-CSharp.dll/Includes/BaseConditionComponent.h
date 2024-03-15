#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& HasHealthCondition() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& FailMsg() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x166CBA0))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseConditionComponent*, uintptr_t))(Il2CppBase() + 0x166CC60))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseConditionComponent*, uintptr_t))(Il2CppBase() + 0x166CCC8))(this, reader);
	}

};

