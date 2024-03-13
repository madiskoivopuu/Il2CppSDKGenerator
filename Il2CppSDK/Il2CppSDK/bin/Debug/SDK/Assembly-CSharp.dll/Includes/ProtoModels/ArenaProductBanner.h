#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaProductBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaProductBanner"));
	}

	template <typename T = MessageParser1ArenaProductBanner*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NamesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_names_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& names_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PrefabFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& prefab_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& BackgroundImageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& backgroundImage_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LinkToProductFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& linkToProduct_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ArenaProductBanner*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E318F4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E31958))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31A78))(this);
	}
	template <typename T = ArenaProductBanner*> T Clone() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31C44))(this);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_Names() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31CA0))(this);
	}
	template <typename T = Il2CppString*> T get_Prefab() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31CA8))(this);
	}
	template <typename T = void> T set_Prefab(Il2CppString* value) {
		return ((T (*)(ArenaProductBanner*, Il2CppString*))(Il2CppBase() + 0x1E31CB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_BackgroundImage() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31D30))(this);
	}
	template <typename T = void> T set_BackgroundImage(Il2CppString* value) {
		return ((T (*)(ArenaProductBanner*, Il2CppString*))(Il2CppBase() + 0x1E31D38))(this, value);
	}
	template <typename T = Il2CppString*> T get_LinkToProduct() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31DB8))(this);
	}
	template <typename T = void> T set_LinkToProduct(Il2CppString* value) {
		return ((T (*)(ArenaProductBanner*, Il2CppString*))(Il2CppBase() + 0x1E31DC0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaProductBanner*, Il2CppObject*))(Il2CppBase() + 0x1E31E40))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaProductBanner* other) {
		return ((T (*)(ArenaProductBanner*, ArenaProductBanner*))(Il2CppBase() + 0x1E31EB0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31F78))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E32018))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaProductBanner*, uintptr_t))(Il2CppBase() + 0x1E3207C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E321C8))(this);
	}
	template <typename T = void> T MergeFrom(ArenaProductBanner* other) {
		return ((T (*)(ArenaProductBanner*, ArenaProductBanner*))(Il2CppBase() + 0x1E32344))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaProductBanner*, uintptr_t))(Il2CppBase() + 0x1E32404))(this, input);
	}

};

}
