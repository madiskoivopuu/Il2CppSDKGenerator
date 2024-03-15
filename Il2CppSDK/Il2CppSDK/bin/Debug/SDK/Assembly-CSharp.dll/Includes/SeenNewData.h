#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeenNewData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenNewData"));
	}

	template <typename R = SeenNewType> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Param() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SeenNewData*, uintptr_t))(Il2CppBase() + 0x1361F38))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SeenNewData*, uintptr_t))(Il2CppBase() + 0x1361F8C))(this, reader);
	}

};

