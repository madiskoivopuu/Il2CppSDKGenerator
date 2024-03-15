#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaProductBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaProductBanner"));
	}

	 static MessageParser1ProtoModels::ArenaProductBanner*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaProductBanner*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NamesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_names_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& names_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PrefabFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& prefab_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& BackgroundImageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& backgroundImage_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LinkToProductFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& linkToProduct_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaProductBanner*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaProductBanner*>* (*)(void *))(Il2CppBase() + 0x1E318F4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E31958))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31A78))(this);
	}
	template <typename R = ProtoModels::ArenaProductBanner*> R Clone() {
		return ((R (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31C44))(this);
	}
	 RepeatedField1Il2CppString*>* get_Names() {
		return ((RepeatedField1Il2CppString*>* (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31CA0))(this);
	}
	template <typename R = Il2CppString*> R get_Prefab() {
		return ((R (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31CA8))(this);
	}
	template <typename R = void> R set_Prefab(Il2CppString* value) {
		return ((R (*)(ArenaProductBanner*, Il2CppString*))(Il2CppBase() + 0x1E31CB0))(this, value);
	}
	template <typename R = Il2CppString*> R get_BackgroundImage() {
		return ((R (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31D30))(this);
	}
	template <typename R = void> R set_BackgroundImage(Il2CppString* value) {
		return ((R (*)(ArenaProductBanner*, Il2CppString*))(Il2CppBase() + 0x1E31D38))(this, value);
	}
	template <typename R = Il2CppString*> R get_LinkToProduct() {
		return ((R (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31DB8))(this);
	}
	template <typename R = void> R set_LinkToProduct(Il2CppString* value) {
		return ((R (*)(ArenaProductBanner*, Il2CppString*))(Il2CppBase() + 0x1E31DC0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaProductBanner*, Il2CppObject*))(Il2CppBase() + 0x1E31E40))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaProductBanner* other) {
		return ((R (*)(ArenaProductBanner*, ProtoModels::ArenaProductBanner*))(Il2CppBase() + 0x1E31EB0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E31F78))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E32018))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaProductBanner*, uintptr_t))(Il2CppBase() + 0x1E3207C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaProductBanner*))(Il2CppBase() + 0x1E321C8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaProductBanner* other) {
		return ((R (*)(ArenaProductBanner*, ProtoModels::ArenaProductBanner*))(Il2CppBase() + 0x1E32344))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaProductBanner*, uintptr_t))(Il2CppBase() + 0x1E32404))(this, input);
	}

};

}
