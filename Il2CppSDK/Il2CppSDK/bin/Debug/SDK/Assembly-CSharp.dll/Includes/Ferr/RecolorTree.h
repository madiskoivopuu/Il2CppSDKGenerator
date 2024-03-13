#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class RecolorTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "RecolorTree"));
	}

	template <typename T = SortX*> static T& sortX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SortY*> static T& sortY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = SortZ*> static T& sortZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = TreeNode*> T& root() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = TreeSettings*> T& settings() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = TreePoint*> T Get(uintptr_t aAt) {
		return ((T (*)(RecolorTree*, uintptr_t))(Il2CppBase() + 0x139C42C))(this, aAt);
	}
	template <typename T = void> T Recolor(uintptr_t aMesh, Nullable1uintptr_t>* aTransform) {
		return ((T (*)(RecolorTree*, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x139C478))(this, aMesh, aTransform);
	}
	template <typename T = void> T Recolor_1(Il2CppArray<uintptr_t>* aPoints, uintptr_t aColors, Nullable1uintptr_t>* aTransform) {
		return ((T (*)(RecolorTree*, Il2CppArray<uintptr_t>*, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x139C710))(this, aPoints, aColors, aTransform);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Recolor_2(Il2CppArray<uintptr_t>* aAt, Nullable1uintptr_t>* aTransform) {
		return ((T (*)(RecolorTree*, Il2CppArray<uintptr_t>*, Nullable1uintptr_t>*))(Il2CppBase() + 0x139C554))(this, aAt, aTransform);
	}
	template <typename T = Il2CppList<uintptr_t>*> T Recolor_3(Il2CppList<uintptr_t>* aAt, Nullable1uintptr_t>* aTransform) {
		return ((T (*)(RecolorTree*, Il2CppList<uintptr_t>*, Nullable1uintptr_t>*))(Il2CppBase() + 0x139C910))(this, aAt, aTransform);
	}
	template <typename T = void> T Recolor_4(Il2CppList<uintptr_t>* aPoints, uintptr_t aColors, Nullable1uintptr_t>* aTransform) {
		return ((T (*)(RecolorTree*, Il2CppList<uintptr_t>*, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x139CB30))(this, aPoints, aColors, aTransform);
	}
	template <typename T = void> T DrawTree() {
		return ((T (*)(RecolorTree*))(Il2CppBase() + 0x139CD1C))(this);
	}
	template <typename T = void> T Create(Il2CppArray<uintptr_t>* aPoints, Il2CppArray<uintptr_t>* aColors, Nullable1uintptr_t>* aTransform, bool aX, bool aY, bool aZ) {
		return ((T (*)(RecolorTree*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Nullable1uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x139BC80))(this, aPoints, aColors, aTransform, aX, aY, aZ);
	}
	template <typename T = void> T Create_1(Il2CppList<uintptr_t>* aPoints, Il2CppList<uintptr_t>* aColors, Nullable1uintptr_t>* aTransform, bool aX, bool aY, bool aZ) {
		return ((T (*)(RecolorTree*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, Nullable1uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x139C0C0))(this, aPoints, aColors, aTransform, aX, aY, aZ);
	}

};

}
