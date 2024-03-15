#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class RenderUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "RenderUtility"));
	}

	 static Il2CppList<int32_t>*& mReservedLayers() {
		return *(Il2CppList<int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& mCamera() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = int32_t> static R GetFreeLayer() {
		return ((R (*)(void *))(Il2CppBase() + 0x13A2BD8))(0);
	}
	template <typename R = void> static R ReserveLayer(int32_t aLayerID) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x13A2D2C))(0, aLayerID);
	}
	template <typename R = uintptr_t> static R CreateRenderCamera() {
		return ((R (*)(void *))(Il2CppBase() + 0x13A2E50))(0);
	}

};

}
