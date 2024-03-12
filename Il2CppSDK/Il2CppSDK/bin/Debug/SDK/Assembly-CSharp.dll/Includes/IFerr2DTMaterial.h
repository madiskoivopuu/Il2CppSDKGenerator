#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFerr2DTMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFerr2DTMaterial"));
	}


	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_fillMaterial() {
		return ((T (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_fillMaterial(uintptr_t value) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_edgeMaterial() {
		return ((T (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_edgeMaterial(uintptr_t value) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T GetDescriptor(uintptr_t aDirection) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aDirection);
	}
	template <typename T = bool> T Has(uintptr_t aDirection) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aDirection);
	}
	template <typename T = void> T Set(uintptr_t aDirection, bool aActive) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, aDirection, aActive);
	}
	template <typename T = Il2CppRect> T GetBody(uintptr_t aDirection, int32_t aBodyID) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, aDirection, aBodyID);
	}
	template <typename T = Il2CppRect> T ToUV(Il2CppRect aNativeRect) {
		return ((T (*)(IFerr2DTMaterial*, Il2CppRect))(Il2CppBase() + 0x0))(this, aNativeRect);
	}
	template <typename T = Il2CppRect> T ToScreen(Il2CppRect aNativeRect) {
		return ((T (*)(IFerr2DTMaterial*, Il2CppRect))(Il2CppBase() + 0x0))(this, aNativeRect);
	}
	template <typename T = Il2CppRect> T ToNative(Il2CppRect aPixelRect) {
		return ((T (*)(IFerr2DTMaterial*, Il2CppRect))(Il2CppBase() + 0x0))(this, aPixelRect);
	}
	template <typename T = Il2CppRect> T ToPixels(Il2CppRect aNativeRect) {
		return ((T (*)(IFerr2DTMaterial*, Il2CppRect))(Il2CppBase() + 0x0))(this, aNativeRect);
	}

};

}
