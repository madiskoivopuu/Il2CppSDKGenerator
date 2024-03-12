#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildEntityResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildEntityResultData"));
	}

	template <typename T = int32_t> T& ResultId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BuildEntityResultData*, uintptr_t))(Il2CppBase() + 0x15A43A0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BuildEntityResultData*, uintptr_t))(Il2CppBase() + 0x15A43F4))(this, reader);
	}

};

}
