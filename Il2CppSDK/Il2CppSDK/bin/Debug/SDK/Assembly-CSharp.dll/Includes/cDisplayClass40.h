#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass40
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass4_0"));
	}

	template <typename T = Action2ResponseStatus*, VideoCapabilities*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T GetCaptureCapabilitiesb__0(uintptr_t videoCapabilities) {
		return ((T (*)(cDisplayClass40*, uintptr_t))(Il2CppBase() + 0x1147E3C))(this, videoCapabilities);
	}
	template <typename T = void> T GetCaptureCapabilitiesb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass40*, uintptr_t))(Il2CppBase() + 0x1147EB4))(this, exception);
	}

};

