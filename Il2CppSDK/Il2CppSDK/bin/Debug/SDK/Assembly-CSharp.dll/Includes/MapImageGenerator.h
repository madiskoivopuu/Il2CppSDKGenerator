#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapImageGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapImageGenerator"));
	}

	template <typename T = Il2CppString*> T& worldFile() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& locationFile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& outputPath() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& worldSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& imageSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& drawMobs() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mainCamera() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& renderTexture() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _contexts() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> static T& NONE_PREFAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EMPTY_PREFAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MapImageGenerator*))(Il2CppBase() + 0x1270D4C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MapImageGenerator*))(Il2CppBase() + 0x1271328))(this);
	}
	template <typename T = void> T RendererImage() {
		return ((T (*)(MapImageGenerator*))(Il2CppBase() + 0x1273840))(this);
	}
	template <typename T = void> T OnLocation(uintptr_t location) {
		return ((T (*)(MapImageGenerator*, uintptr_t))(Il2CppBase() + 0x1272FD8))(this, location);
	}
	template <typename T = Il2CppList<void*>*> static T ParseList(Il2CppString* jsonString, Il2CppArray<uintptr_t>* componentNames, Il2CppArray<uintptr_t>* componentTypes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1271FAC))(0, jsonString, componentNames, componentTypes);
	}
	template <typename T = Il2CppString*> static T GetFullName(Il2CppDictionary<Il2CppString*, Il2CppString*>* names, Il2CppString* name) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1273B20))(0, names, name);
	}
	template <typename T = uintptr_t> static T ParseEntity(Il2CppString* jsonString, Il2CppArray<uintptr_t>* componentNames, Il2CppArray<uintptr_t>* componentTypes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1272A80))(0, jsonString, componentNames, componentTypes);
	}

};

}
