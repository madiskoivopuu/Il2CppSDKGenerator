#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneMergeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneMergeData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ToId() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RuneMergeData*, uintptr_t))(Il2CppBase() + 0x1353C2C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RuneMergeData*, uintptr_t))(Il2CppBase() + 0x1353C80))(this, reader);
	}

};

