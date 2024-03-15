#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChildsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChildsComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ChildsComponent*, Il2CppObject*))(Il2CppBase() + 0x1746AB0))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChildsComponent*, uintptr_t))(Il2CppBase() + 0x1746B48))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChildsComponent*, uintptr_t))(Il2CppBase() + 0x1746BB8))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ChildsComponent*, Il2CppObject*))(Il2CppBase() + 0x1746BCC))(this, blueprintComponent);
	}

};

