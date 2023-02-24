#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Oleg/UIElement/UIElementAbstract.h"

class UIElementImage : public UIElementAbstract {
	public:
		Vector2 pos;
		Vector2 size;

		UIElementImage();
		UIElementImage(TwinsanityMaterialShader* param_1);
		UIElementImage(TwinsanityMaterialShader* shader, Vector2* pos, Vector2* size);
		UIElementImage(uint param_2, uint param_3);
		UIElementImage(uint param_2, uint param_3, Vector2* pos, Vector2* size);
		~UIElementImage();

		virtual void RenderColorTransfomed(Matrix4* transform, Color color);
		virtual void ReplaceMaterial(uint id);
		virtual void ReplaceShader(TwinsanityMaterialShader* shader);
		virtual void RenderTransfomed(Matrix4* transform);
		virtual void RenderColor(Color color);
		virtual void Render();


};
