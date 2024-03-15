#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeArrayComponent1.h" 

class UintListComponent : public TypeArrayComponent1<uint32_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UintListComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UintListComponent*, uintptr_t))(Il2CppBase() + 0x1536928))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UintListComponent*, uintptr_t))(Il2CppBase() + 0x1536998))(this, writer);
	}

};

