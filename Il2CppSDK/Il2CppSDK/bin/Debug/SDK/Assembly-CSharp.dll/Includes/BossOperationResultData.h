#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOperationResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOperationResultData"));
	}

	template <typename T = int32_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Opened() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& ErrorMsg() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BossOperationResultData*, uintptr_t))(Il2CppBase() + 0x16CCDDC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BossOperationResultData*, uintptr_t))(Il2CppBase() + 0x16CCE40))(this, reader);
	}

};

