#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChildsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChildsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ChildsComponent*, Il2CppObject*))(Il2CppBase() + 0x1746AB0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChildsComponent*, uintptr_t))(Il2CppBase() + 0x1746B48))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChildsComponent*, uintptr_t))(Il2CppBase() + 0x1746BB8))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(ChildsComponent*, Il2CppObject*))(Il2CppBase() + 0x1746BCC))(this, blueprintComponent);
	}

};

