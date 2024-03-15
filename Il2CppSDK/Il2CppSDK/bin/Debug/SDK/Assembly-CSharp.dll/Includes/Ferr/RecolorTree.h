#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class RecolorTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "RecolorTree"));
	}

	template <typename R = SortX*> static R& sortX() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = SortY*> static R& sortY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = SortZ*> static R& sortZ() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = TreeNode*> R& root() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = TreeSettings*> R& settings() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = TreePoint*> R Get(uintptr_t aAt) {
		return ((R (*)(RecolorTree*, uintptr_t))(Il2CppBase() + 0x139C42C))(this, aAt);
	}
	template <typename R = void> R Recolor(uintptr_t aMesh, Nullable1<uintptr_t>* aTransform) {
		return ((R (*)(RecolorTree*, uintptr_t, Nullable1<uintptr_t>*))(Il2CppBase() + 0x139C478))(this, aMesh, aTransform);
	}
	template <typename R = void> R Recolor_1(Il2CppArray<uintptr_t>* aPoints, uintptr_t aColors, Nullable1<uintptr_t>* aTransform) {
		return ((R (*)(RecolorTree*, Il2CppArray<uintptr_t>*, uintptr_t, Nullable1<uintptr_t>*))(Il2CppBase() + 0x139C710))(this, aPoints, aColors, aTransform);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R Recolor_2(Il2CppArray<uintptr_t>* aAt, Nullable1<uintptr_t>* aTransform) {
		return ((R (*)(RecolorTree*, Il2CppArray<uintptr_t>*, Nullable1<uintptr_t>*))(Il2CppBase() + 0x139C554))(this, aAt, aTransform);
	}
	 Il2CppList<uintptr_t>* Recolor_3(Il2CppList<uintptr_t>* aAt, Nullable1<uintptr_t>* aTransform) {
		return ((Il2CppList<uintptr_t>* (*)(RecolorTree*, Il2CppList<uintptr_t>*, Nullable1<uintptr_t>*))(Il2CppBase() + 0x139C910))(this, aAt, aTransform);
	}
	template <typename R = void> R Recolor_4(Il2CppList<uintptr_t>* aPoints, uintptr_t aColors, Nullable1<uintptr_t>* aTransform) {
		return ((R (*)(RecolorTree*, Il2CppList<uintptr_t>*, uintptr_t, Nullable1<uintptr_t>*))(Il2CppBase() + 0x139CB30))(this, aPoints, aColors, aTransform);
	}
	template <typename R = void> R DrawTree() {
		return ((R (*)(RecolorTree*))(Il2CppBase() + 0x139CD1C))(this);
	}
	template <typename R = void> R Create(Il2CppArray<uintptr_t>* aPoints, Il2CppArray<uintptr_t>* aColors, Nullable1<uintptr_t>* aTransform, bool aX, bool aY, bool aZ) {
		return ((R (*)(RecolorTree*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Nullable1<uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x139BC80))(this, aPoints, aColors, aTransform, aX, aY, aZ);
	}
	template <typename R = void> R Create_1(Il2CppList<uintptr_t>* aPoints, Il2CppList<uintptr_t>* aColors, Nullable1<uintptr_t>* aTransform, bool aX, bool aY, bool aZ) {
		return ((R (*)(RecolorTree*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, Nullable1<uintptr_t>*, bool, bool, bool))(Il2CppBase() + 0x139C0C0))(this, aPoints, aColors, aTransform, aX, aY, aZ);
	}

};

}
