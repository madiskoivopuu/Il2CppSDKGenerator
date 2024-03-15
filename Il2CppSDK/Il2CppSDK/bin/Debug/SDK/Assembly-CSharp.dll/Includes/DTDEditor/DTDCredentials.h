#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DTDEditor {

class DTDCredentials
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DTDEditor", "DTDCredentials"));
	}

	template <typename R = DTDEditor::DTDPlatform*> R& Platform() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Key() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Secret() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

}
