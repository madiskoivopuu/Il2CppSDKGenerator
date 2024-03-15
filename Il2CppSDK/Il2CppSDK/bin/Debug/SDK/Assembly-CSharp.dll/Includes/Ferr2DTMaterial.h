#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Ferr2DTMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Ferr2DT_Material"));
	}

	template <typename R = uintptr_t> R& _fillMaterial() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _edgeMaterial() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Ferr2DTSegmentDescription*>*> R& _descriptors() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& isPixel() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = uintptr_t> R get_fillMaterial() {
		return ((R (*)(Ferr2DTMaterial*))(Il2CppBase() + 0x1692998))(this);
	}
	template <typename R = void> R set_fillMaterial(uintptr_t value) {
		return ((R (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16929A0))(this, value);
	}
	template <typename R = uintptr_t> R get_edgeMaterial() {
		return ((R (*)(Ferr2DTMaterial*))(Il2CppBase() + 0x16929A8))(this);
	}
	template <typename R = void> R set_edgeMaterial(uintptr_t value) {
		return ((R (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16929B0))(this, value);
	}
	template <typename R = Ferr2DTSegmentDescription*> R GetDescriptor(Ferr2DTTerrainDirection aDirection) {
		return ((R (*)(Ferr2DTMaterial*, Ferr2DTTerrainDirection))(Il2CppBase() + 0x1692BA8))(this, aDirection);
	}
	template <typename R = bool> R Has(Ferr2DTTerrainDirection aDirection) {
		return ((R (*)(Ferr2DTMaterial*, Ferr2DTTerrainDirection))(Il2CppBase() + 0x1692DC4))(this, aDirection);
	}
	template <typename R = void> R Set(Ferr2DTTerrainDirection aDirection, bool aActive) {
		return ((R (*)(Ferr2DTMaterial*, Ferr2DTTerrainDirection, bool))(Il2CppBase() + 0x1692E34))(this, aDirection, aActive);
	}
	template <typename R = uintptr_t> R ToUV(uintptr_t aNativeRect) {
		return ((R (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x1692FAC))(this, aNativeRect);
	}
	template <typename R = uintptr_t> R ToScreen(uintptr_t aNativeRect) {
		return ((R (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16930C8))(this, aNativeRect);
	}
	template <typename R = uintptr_t> R GetBody(Ferr2DTTerrainDirection aDirection, int32_t aBodyID) {
		return ((R (*)(Ferr2DTMaterial*, Ferr2DTTerrainDirection, int32_t))(Il2CppBase() + 0x1693168))(this, aDirection, aBodyID);
	}
	template <typename R = void> R ConvertToPercentage() {
		return ((R (*)(Ferr2DTMaterial*))(Il2CppBase() + 0x1692C78))(this);
	}
	template <typename R = uintptr_t> R ToNative(uintptr_t aPixelRect) {
		return ((R (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16931C0))(this, aPixelRect);
	}
	template <typename R = uintptr_t> R ToPixels(uintptr_t aNativeRect) {
		return ((R (*)(Ferr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x16933BC))(this, aNativeRect);
	}
	template <typename R = Il2CppString*> R IFerr2DTMaterial_get_name() {
		return ((R (*)(Ferr2DTMaterial*))(Il2CppBase() + 0x16935B8))(this);
	}

};

