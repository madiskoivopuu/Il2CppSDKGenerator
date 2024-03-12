#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CategoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CategoryComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CategoryComponent*, uintptr_t))(Il2CppBase() + 0x13E87E0))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CategoryComponent*, uintptr_t))(Il2CppBase() + 0x13E885C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CategoryComponent*, uintptr_t))(Il2CppBase() + 0x13E89B8))(this, writer);
	}

};

}
