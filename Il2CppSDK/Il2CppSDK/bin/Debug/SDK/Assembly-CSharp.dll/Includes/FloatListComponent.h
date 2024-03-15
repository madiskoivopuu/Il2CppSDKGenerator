#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayComponent1.h" 

class FloatListComponent : public TypeArrayComponent1<float>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatListComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FloatListComponent*, uintptr_t))(Il2CppBase() + 0x15F7190))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FloatListComponent*, uintptr_t))(Il2CppBase() + 0x15F7200))(this, writer);
	}

};

