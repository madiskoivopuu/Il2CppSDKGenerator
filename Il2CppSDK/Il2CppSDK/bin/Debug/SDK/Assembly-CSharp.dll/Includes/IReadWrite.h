#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IReadWrite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IReadWrite"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(IReadWrite*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(IReadWrite*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}

};

