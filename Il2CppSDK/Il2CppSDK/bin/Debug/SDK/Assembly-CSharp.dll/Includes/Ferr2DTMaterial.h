#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Ferr2DTMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Ferr2DT_Material"));
	}

	template <typename T = uintptr_t> T& _fillMaterial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _edgeMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _descriptors() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isPixel() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_fillMaterial() {
		return ((T (*)(Ferr2DTMaterial*))(Il2CppBase() + 0x1692998))(this);
	}
	template <typename T = void> T set_fillMaterial(uintptr_t value) {
		return ((T (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16929A0))(this, value);
	}
	template <typename T = uintptr_t> T get_edgeMaterial() {
		return ((T (*)(Ferr2DTMaterial*))(Il2CppBase() + 0x16929A8))(this);
	}
	template <typename T = void> T set_edgeMaterial(uintptr_t value) {
		return ((T (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16929B0))(this, value);
	}
	template <typename T = Ferr2DTSegmentDescription*> T GetDescriptor(Ferr2DTTerrainDirection* aDirection) {
		return ((T (*)(Ferr2DTMaterial*, Ferr2DTTerrainDirection*))(Il2CppBase() + 0x1692BA8))(this, aDirection);
	}
	template <typename T = bool> T Has(Ferr2DTTerrainDirection* aDirection) {
		return ((T (*)(Ferr2DTMaterial*, Ferr2DTTerrainDirection*))(Il2CppBase() + 0x1692DC4))(this, aDirection);
	}
	template <typename T = void> T Set(Ferr2DTTerrainDirection* aDirection, bool aActive) {
		return ((T (*)(Ferr2DTMaterial*, Ferr2DTTerrainDirection*, bool))(Il2CppBase() + 0x1692E34))(this, aDirection, aActive);
	}
	template <typename T = uintptr_t> T ToUV(uintptr_t aNativeRect) {
		return ((T (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x1692FAC))(this, aNativeRect);
	}
	template <typename T = uintptr_t> T ToScreen(uintptr_t aNativeRect) {
		return ((T (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16930C8))(this, aNativeRect);
	}
	template <typename T = uintptr_t> T GetBody(Ferr2DTTerrainDirection* aDirection, int32_t aBodyID) {
		return ((T (*)(Ferr2DTMaterial*, Ferr2DTTerrainDirection*, int32_t))(Il2CppBase() + 0x1693168))(this, aDirection, aBodyID);
	}
	template <typename T = void> T ConvertToPercentage() {
		return ((T (*)(Ferr2DTMaterial*))(Il2CppBase() + 0x1692C78))(this);
	}
	template <typename T = uintptr_t> T ToNative(uintptr_t aPixelRect) {
		return ((T (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16931C0))(this, aPixelRect);
	}
	template <typename T = uintptr_t> T ToPixels(uintptr_t aNativeRect) {
		return ((T (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16933BC))(this, aNativeRect);
	}
	template <typename T = Il2CppString*> T IFerr2DTMaterial_get_name() {
		return ((T (*)(Ferr2DTMaterial*))(Il2CppBase() + 0x16935B8))(this);
	}

};

