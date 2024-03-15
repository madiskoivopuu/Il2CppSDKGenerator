#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class RuntimeLayerUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "RuntimeLayerUtil"));
	}

	 static Il2CppList<int32_t>*& mReservedLayers() {
		return *(Il2CppList<int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> static R GetFreeLayer() {
		return ((R (*)(void *))(Il2CppBase() + 0x1354720))(0);
	}
	template <typename R = void> static R ReserveLayer(int32_t aLayerID) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1354874))(0, aLayerID);
	}

};

}
